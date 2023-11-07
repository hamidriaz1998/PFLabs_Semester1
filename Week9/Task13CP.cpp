#include<iostream>
using namespace std;
void jazzifyChords(string chords[],int numChords);
main(){
        int numChords;
    cout << "Enter the number of chords: ";
    cin >> numChords;
    cout << "Enter " << numChords << " chords, one per line: "<<endl;
    string arr[numChords];
    for (int i = 0; i < numChords; i++)
    {
        cin >> arr[i];
    }
    jazzifyChords(arr,numChords);
}

void jazzifyChords(string chords[],int numChords){
    for (int i = 0;i<numChords;i++){
        int size = 0;
        for (int n = 0;chords[i][n]!='\0';n++){
            size++;
        }
        if (chords[i][size-1] != '7'){
            chords[i] += '7';
        }
    }
    cout<<"Jazzified chords: [";
    for(int i = 0;i<numChords;i++){
        cout<<chords[i];
        if (i != numChords-1){
            cout<<", ";
        }
    }
    cout<<"]";
}