vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) 
{
    vector<vector<int>> adj(numCourses);

    // build graph
    for(auto &e : prerequisites)
    {
        int course = e[0];
        int prereq = e[1];
        adj[prereq].push_back(course);
    }

    // indegree
    vector<int> indegree(numCourses, 0);
    for(auto &e : prerequisites)
    {
        indegree[e[0]]++;
        //e=[course,prerequisite] e=[1,0] [2,0] [3,1]

        //destination and source

        //prerequisite =[[2,1]]
        
    }

    // queue
    queue<int> q;
    for(int i = 0; i < numCourses; i++)
    {
        if(indegree[i] == 0)
        {
            q.push(i);
        }
    }

    vector<int> result;

    // BFS
    while(!q.empty())
    {
        int node = q.front();
        q.pop();

        result.push_back(node);

        for(int v : adj[node])
        {
            indegree[v]--;
            if(indegree[v] == 0)
            {
                q.push(v);
            }
        }
    }

    // cycle check
    if(result.size() == numCourses)
        return result;
    else
        return {};
}