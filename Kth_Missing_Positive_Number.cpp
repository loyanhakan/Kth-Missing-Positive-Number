using namespace std;
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k){
        int N[2500];
        for(int i=0; i<2200; i++)
        {
            N[i]=(i);
        }
        for(int i=0; i<arr.size(); i++)//arr eleman seçme
        {
           for( int j=0; j<2000; j++)
            {
                if(arr[i]==N[j])
                {
                    int key=j;
                  for(int k=key; k<2000; k++)
                  {
                      N[k]=(N[k]+1);
                  }
                }
            }
        }
        return N[k];
    }
};
