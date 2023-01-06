class Solution {
public:
    int squareDist(vector<int>p1,vector<int>p2){
        int a = pow(p1[0]-p2[0],2);
        int b = pow(p1[1]-p2[1],2);
        return (a+b);
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        if(p1==p2||p2==p3)return false;
        int dist12= squareDist(p1,p2);
        int dist13= squareDist(p1,p3);
        int dist14= squareDist(p1,p4);
       
        if (dist12 == dist13 && 2*dist12 == dist14) {
            int dist = squareDist(p2, p4);
            return (dist == squareDist(p3, p4) && dist == dist12);
        }

        //same condition for all other combinations
        if (dist13 == dist14 && 2*dist13 == dist12) {
            int dist = squareDist(p2, p3);
            return (dist == squareDist(p2, p4) && dist == dist13);
        }

        if (dist12 == dist14 && 2*dist12 == dist13) {
            int dist = squareDist(p2, p3);
            return (dist == squareDist(p3, p4) && dist == dist12);
        }
        return false;
    }
};
