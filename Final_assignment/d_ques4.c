#include <stdio.h>

int main()
{
    long long arr[] = {1, 2, 8, 3, 2, 2, 2, 5, 1};
    int length = sizeof(arr)/sizeof(arr[0]);

    long long fr[length];
    int visited = -1;

    for(int i = 0; i < length; i++){
        int count = 1;
        for(int j = i+1; j < length; j++){
            if(arr[i] == arr[j]){
                count++;
                fr[j] = visited;
            }
        }
        if(fr[i] != visited)
            fr[i] = count;
    }

    for(int i = 0; i < length; i++){
        if(fr[i] != visited){
            printf("%d %d\n", arr[i], fr[i]);
        }
    }
    return 0;
}




//Why do we need long long int? Give an example of a frequency array to count integer values.
//Can you make a frequency array that counts long long int type values?
//If the answer is yes, tell how?
//If the answer is no, tell why?
