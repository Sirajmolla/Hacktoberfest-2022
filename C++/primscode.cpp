int MST(vector<int> grid[], int v) {
    //Distance vector to keep track of least value...
    vector<int> dist(v, INT_MAX);
    
    //mSet vector to keep track of all the nodes already included in out MST
    vector<bool> mSet(v, false);
    
    // we initialize the source vertex as 0 distance (source can be any vertex, here it is 0th vertex)
    dist[0] = 0;
    
    //Result variable to store the weight of our MST
    int res=0;
    
    //A minimum spanning tree will contain exactly v-1 edges, hence we traverse the loop from 0 to v-1(this will include all the vertex at-least once)
    for(int count=0;count<v;count++) {
        //In this section, we are finding the vertex with minimum distance from current set of MST vertex...
        int ind_of_min = -1;
        for(int i=0;i<v;i++) {
            if(!mSet[i] && (ind_of_min==-1 || dist[ind_of_min]>dist[i]))
            ind_of_min = i;
        }
        
        //After finding the index of vertex at least distance, we include it in our MST set and add its weight to our result variable...
        mSet[ind_of_min] = true;
        res+=dist[ind_of_min];
        
        //Next, we visit all the neighbours of currently added vetrex, and update the distance, if distance from current index is less than distance from previous vertices...
        for(int i=0;i<v;i++){
            if(grid[ind_of_min][i]!=0 && !mSet[i]) {
                dist[i] = min(dist[i], grid[ind_of_min][i]);
            }
        }
    }
    
    return res;
}
