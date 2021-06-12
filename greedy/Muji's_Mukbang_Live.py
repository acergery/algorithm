'''
2021.06.12 무지의 먹방 라이브
https://programmers.co.kr/learn/courses/30/lessons/42891
'''
import heapq


def solution(food_times, k):
    if sum(food_times) <= k:
        return -1

    total_time = 0
    prev_food_time = 0
    num_food_types = len(food_times)
    # 음식별 필요시간 오름차순로 정렬, python heap은 min heap
    # 음식을 먹는데 소요되는 시간 한번에 지울 수 있음
    heap = []
    for i in range(num_food_types):
        heapq.heappush(heap, (food_times[i], i + 1))

    while total_time + ((heap[0][0] - prev_food_time) * num_food_types) <= k:
        now_food_time = heapq.heappop(heap)[0]
        total_time += (now_food_time - prev_food_time) * num_food_types
        num_food_types -= 1
        prev_food_time = now_food_time

    heap = sorted(heap, key=lambda x: x[1])
    return heap[(k - total_time) % num_food_types][1]


food_times = [4, 1, 2, 1]
k = 3
result = solution(food_times, k)
print(result)
