given = [[int(element), index, 0] for index, element in enumerate(str(input()).split(" "))]
index = list(range(len(given)))
index.sort(key = lambda x:given[x])
largest_distance = 0
max_index_from_i = [index[-1]]*len(given)
i = len(given) - 2
while i >= 0:
	max_index_from_i[i] = max(max_index_from_i[i+1], index[i])
	i -= 1
for i in range(len(A)-1):
	largest_distance = max(largest_distance, max_index_from_i[i] - index[i])