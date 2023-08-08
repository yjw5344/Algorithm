def solution(participant, completion):  
  participant.sort()
  completion.sort()
  for i in range(len(completion)) :
    if participant[i] != completion[i] :
      return participant[i]
  
  return participant[len(participant)-1]



participant_1 = ["leo", "kiki", "eden"]
completion_1 = ["eden", "kiki"]
participant_2 = ["marina", "josipa", "nikola", "vinko", "filipa"]
completion_2 = ["josipa", "filipa", "marina", "nikola"]
participant_3 = ["mislav", "stanko", "mislav", "ana"]
completion_3 = ["stanko", "ana", "mislav"]


solution(participant_1, completion_1) # leo
solution(participant_2, completion_2) # vinko
solution(participant_2, completion_2) # mislav