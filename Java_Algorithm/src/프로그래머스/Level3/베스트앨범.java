package 프로그래머스.Level3;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;

class Song{
    int index;
    String genre;
    int plays;

    public Song(int index, String genre, int plays) {
        this.index = index;
        this.genre = genre;
        this.plays = plays;
    }
}

class GenreSort implements Comparable<GenreSort>{
    String genre;
    int totalCount;
    int indexCount;

    public GenreSort(String genre, int totalCount, int indexCount) {
        this.genre = genre;
        this.totalCount = totalCount;
        this.indexCount = indexCount;
    }

    @Override
    public int compareTo(GenreSort o) {
        if(this.totalCount < o.totalCount){
            return 1;
        }else{
            return -1;
        }
    }
}


class Solution_베스트앨범 {
    public int[] solution(String[] genres, int[] plays) {

        int songCount = genres.length;
        ArrayList<Song> songList = new ArrayList<Song>();
        ArrayList<GenreSort> genreSort = new ArrayList<GenreSort>();

        for(int i = 0; i < songCount; i++){
            songList.add(new Song(i,genres[i],plays[i]));

            boolean flag = false;
            for(GenreSort g : genreSort){
                if(g.genre.equals(genres[i])){
                    g.totalCount += plays[i];
                    g.indexCount += 1;
                    flag = true;
                    break;
                }
            }
            if(flag == false) {
                genreSort.add(new GenreSort(genres[i], plays[i],1));
            }
        }

        Collections.sort(genreSort);
        Collections.sort(songList, new Comparator<Song>() {
            @Override
            public int compare(Song o1, Song o2) {

                String s1 = o1.genre;
                String s2 = o2.genre;
                int p1 = 0;
                int p2 = 0;

                for(int i = 0 ; i < genreSort.size() ; i++){
                    if(genreSort.get(i).genre.equals(s1)){
                        p1 = i;
                    }

                    if(genreSort.get(i).genre.equals(s2)){
                        p2 = i;
                    }
                }

                if(p1 > p2){
                    return 1;
                }else if(p1 == p2){
                    if(o1.plays < o2.plays){
                        return 1;
                    }else if(o1.plays == o2.plays){
                        if(o1.index > o2.index){
                            return 1;
                        }else{
                            return -1;
                        }
                    }else{
                        return -1;
                    }
                }else{
                    return -1;
                }
            }
        });


        ArrayList<Integer> result = new ArrayList<Integer>();
        int pivot = 0;
        for(GenreSort g : genreSort){
            if(g.indexCount < 2){
                result.add(songList.get(pivot).index);
                pivot += g.indexCount;
            }else{
                result.add(songList.get(pivot).index);
                result.add(songList.get(pivot+1).index);
                pivot += g.indexCount;
            }
        }
        int[] answer = new int[result.size()];
        for(int i = 0 ; i< result.size() ; i++){
            answer[i] = result.get(i);
        }
        return answer;
    }
}

public class 베스트앨범 {
    public static void main(String[] args) {

        String[] genres = {"classic", "pop", "classic", "classic", "pop"};
        int[] plays = {500, 600, 150, 800, 2500};

        String[] genres1 = { "classic", "pop", "classic", "pop", "classic", "classic"};
        int[] plays1 = {400,600,150,2500,500,500};


        Solution_베스트앨범 s = new Solution_베스트앨범();

        System.out.println(Arrays.toString(s.solution(genres1, plays1)));

    }
}
