class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int pickP =0;
        int pickG =0;
        int pickM =0;

        int travelP =0;
        int travelG =0;
        int travelM =0;

        int lastP =0;
        int lastG =0;
        int lastM =0;

        for(int i=0; i<garbage.size(); i++) {
            string curr = garbage[i];
            for(int j=0; j<curr.length(); j++) {
                if(curr[j] =='P') {
                    pickP++;
                    lastP=i;
                }else if(curr[j] =='G') {
                   pickG++;
                   lastG = i; 
                }else if(curr[j] =='M') {
                    pickM++;
                    lastM = i;
                }
            }
        }

        //calculate travel time
        for(int j=0; j<lastP; j++) {
            travelP = travelP + travel[j];
        }

        for(int j=0; j<lastG; j++) {
            travelG = travelG + travel[j];
        }

        for(int j=0; j<lastM; j++) {
            travelM = travelM + travel[j];
        }

        int total = (pickP +travelP) + (travelG + pickG) + (travelM + pickM); 
        return total;
    }
};