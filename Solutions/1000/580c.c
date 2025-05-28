#include <stdio.h>
#include <stdlib.h>

struct node
{
    int val;
    struct node *next;
};

int dfs(struct node **graph, int *cats, int parent, int u, int m, int cnt)
{
    if (cats[u])
        cnt++;
    else
        cnt = 0;

    if (cnt > m)
        return 0;

    if (parent != -1 && graph[u]->next == NULL)
        return 1;

    int res = 0;
    while (graph[u] != NULL)
    {
        struct node *curr = graph[u];
        graph[u] = graph[u]->next;
        if (curr->val != parent)
            res += dfs(graph, cats, u, curr->val, m, cnt);
        free(curr);
    }

    return res;
}

void addEdge(struct node **graph, int u, int v)
{
    struct node *vertex = (struct node *)malloc(sizeof(struct node));
    vertex->val = v;
    vertex->next = graph[u];
    graph[u] = vertex;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    struct node **graph = (struct node **)malloc(n * sizeof(struct node *));
    int *cats = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        graph[i] = NULL;
        scanf("%d", &cats[i]);
    }

    for (int i = 1; i < n; i++)
    {
        int u, v;
        scanf("%d %d", &u, &v);
        addEdge(graph, u - 1, v - 1);
        addEdge(graph, v - 1, u - 1);
    }

    printf("%d", dfs(graph, cats, -1, 0, m, 0));
    free(cats);
    free(graph);

    return 0;
}