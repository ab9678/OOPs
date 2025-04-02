// # include <iostream>
// using namespace std;
// int main(){

//     int b1[4]={0};
//     int b2[4]={0};
//     int res[5]={0};

//     // set to zero

//     int i,carry=0;
//     // for (i=0;i<3;i++){
//     //     b1[i]=0;
//     //     b2[i]=0;
//     //     res[i]=0;
//     // }

//     for (i=0;i<3;i++){
//         cin>>b1[i];
//     }
//     for (i=0;i<3;i++){
//         cin >>b2[i];
//     }

//     for(i=0;i<4;i++){
//         if((b1[i]+b2[i]+carry)>1){
//             // cout <<"yoyoyo1";
//             carry=1;
//             res[i]=0;
//         }else if((b1[i]+b2[i]+carry)==1){
//             // cout <<"yoyo2";
//             carry=0;
//             res[i]=1; 
//         }else{
//             // cout <<"yo3";
//             carry=0;
//             res[i]=0;   
//         }
//     }

//     for (i=5;i>0;i--){
//         cout<<res[i];
//     }



// }