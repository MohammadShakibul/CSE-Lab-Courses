graph = {
    'A': [('B', 3), ('C', 5)],
    'B': [('D', 2)],
    'C': [('E', 4)],
    'D': [('F', 1)],
    'E': [],
    'F': []
}
sn = 'A'
gn = 'F'

def dummy_heuristic(n, g):
    return 0

def gbfs(graph, s, g, h):
    pq = [(h(s, g), s)]
    visited = set()

    while pq:
        pq.sort()
        current_cost, current_node = pq.pop(0)
        if current_node == g:
            print("Goal reached:", current_node)
            return
        for neighbor, cost in graph[current_node]:
            if neighbor not in visited:
                neighbor_cost = h(neighbor, g)
                pq.append((neighbor_cost, neighbor))
                visited.add(neighbor)

        print("Visited node:", current_node)
    print("Goal not reached")

gbfs(graph, sn, gn, dummy_heuristic)