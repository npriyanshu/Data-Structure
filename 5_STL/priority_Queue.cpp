 #include<iostream>
 #include<queue>
 using namespace std;
 int main()
 {
    // a queue whose first element is always greatest
  

    // default priority queue is based on max heap

// create priority queue

// max heap
priority_queue<int> maxi;

// min - heap

priority_queue<int,vector<int>,greater<int> > mini;

maxi.push(1); 
maxi.push(2); 
maxi.push(4); 
maxi.push(3); 

// how to travers max - heap (priority queue)
int n = maxi.size();
for(int i =0;i<n;i++){

// here the top element will always going to be the greates one
cout<<maxi.top()<<" ";
maxi.pop();
 
}

cout<<endl<<" mini "<< endl;


mini.push(1); 
mini.push(2); 
mini.push(4); 
mini.push(3); 

 // how to travers max - heap (priority queue)
int l = mini.size();
for(int i =0;i<l;i++){

// here the top element will always going to be the greates one
cout<<mini.top()<<" ";
mini.pop();
 
}
 
 cout<<"is it empty :"<<mini.empty();
 
 return 0;
 }