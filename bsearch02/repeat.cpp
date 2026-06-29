// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter size of array";
//     cin>>n;
//     int arr[n];
//     cout<<"enter element in array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int i=0;
//     int j=n-1;
//     while(i<=j){
//         int mid=(i+j)/2;
//         if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
//             cout<<mid;
//             break;
//         }
//         if(arr[mid]<arr[mid-1]) j=mid-1;
//         else i=mid+1;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    cout<<"enter element in array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter the number you want in rotated array";
    cin>>x;
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i=0;
    int j=n-1;
    int idx=-1;
    if(n==2){
        if(arr[0]==x){
            cout<<"element found at 0 index";
        }
        else if(arr[1]==x){
            cout<<"element found at 1 index";
        }
        else cout<<"element not found";
    }
    while(i<=j){
        int mid=(i+j)/2;
        if(mid==0) i=mid+1;
        else if(mid==n-1) j=mid-1;
        else if(arr[mid]<arr[mid-1]&&arr[mid]<arr[mid+1]){
            idx=mid;
            break;
        }
        else if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1]){
            idx=mid+1;
            break;
        }
        else if(arr[mid]<arr[j]) j=mid-1;
        else i=mid+1;
    }
    bool flag=false;
    if(idx=-1){
        i=0;
        j=n-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(x==arr[mid]){
                cout<<"element found at"<<mid<<"index";
                flag=true;
                break;
            }
            else if(arr[mid]<x) i=mid+1;
            else j=mid-1;
        }
    }
    else if(x>=arr[0]&&x<=arr[idx-1]){
        i=0;
        j=idx-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(x==arr[mid]){
                cout<<"element present at"<<mid<<"index";
                flag=true;
                break;
            }
            else if(arr[mid]<x) i=mid+1;
            else j=mid-1;
        }
    }
    else{
        i=idx;
        j=n-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(x==arr[mid]){
                cout<<"element present at"<<mid<<"index";
                flag=true;
                break;
            }
            else if(arr[mid]<x) i=mid+1;
            else j=mid-1;
        }
    }
    if(flag==false){
        cout<<"element is not present in array";
    }
}

// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array";
//     cin>>n;
//     vector<int> v(n);
//     cout<<"enter number in array";
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     int x;
//     cout<<"enter the number you want to  find the minimum number of that number in given  array";
//     cin>>x;
//     int k;
//     cout<<"enter the size of arry you want that have colest element";
//     cin>>k;
//     vector<int>ans(k);
//     int lo=0;
//     int hi=n-1;
//     int mid=-1;
//     bool flag=false;
//     int t=0;
//     if(x<v[0]){
//         for(int i=0;i<k;i++){
//             ans[i]=v[i];
//         }
//         for(int i=0;i<k;i++){
//             cout<<ans[i]<<" ";
//         }
//         return -1;
//     }
//     if(x>v[n-1]){
//         int i=n-1;
//         int j=k-1;
//         while(j>=0){
//             ans[j]=v[i];
//             j--;
//             i--;
//         }
//         for(int i=0;i<k;i++){
//             cout<<ans[i]<<" ";
//         }
//         return -1;
//     }
//     while(lo<=hi){
//         mid=lo+(hi-lo)/2;
//         if(v[mid]==x){
//             ans[t]=v[mid];
//             flag=true;
//             t++;
//             break;
//         }
//         else if(v[mid]<x) lo=mid+1;
//         else hi=mid-1;
//     }
//     int lb=hi;
//     int ub=lo;
//     if(flag==true){
//         lb=mid-1;
//         ub=mid+1;
//     }
//     while(t<k&&lb>=0&&ub<n){
//         int y=abs(x-v[lb]);
//         int z=abs(x-v[ub]);
//         if(y<=z){
//             ans[t]=v[lb];
//             lb--;
//         }
//         else{
//             ans[t]=v[ub];
//             ub++;
//         }
//         t++;
//     }
//     if(lb<0){
//         while(t<k){
//             ans[t]=v[ub];
//             t++;
//             ub++;
//         }
//     }
//     if(ub>=n){
//         while(t<k){
//             ans[t]=v[lb];
//             t++;
//             lb--;
//         }
//     }
//     sort(ans.begin(),ans.end());
//     for(int i=0;i<k;i++){
//         cout<<ans[i]<<" ";
//     }
// }

// #include<iostream>
// #include<math.h>
// using namespace std;
// bool isperfectsquare(int n){
//     int root =sqrt(n);
//     if(root*root==n) return true;
//     else return false;

// }
// int main(){
//     int n;
//     cout<<"enter the number you waant to find whether it is sqare of sum of two number";
//     cin>>n;
//     int i=0;
//     int j=n;
//     bool flag =false;
//     while(i<=j){
//         if(isperfectsquare(i)&&isperfectsquare(j)){
//             flag =true;
//             break;
//         }
//         else if(!isperfectsquare(j)){
//             j=(int)sqrt(j)*(int)sqrt(j);
//             i=n-j;
//         }
//         else{
//             i=((int)sqrt(i)+1)*((int)sqrt(i)+1);
//             j=n-i;
//         }
//     }
//     if(flag==true) cout<<"number exist";
//     else cout<<"numbet not exist";
// }