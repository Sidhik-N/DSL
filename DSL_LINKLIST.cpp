#include&lt;iostream&gt;
using namespace std;
struct node{
int prn;
char name[20];
struct node *next;
};
class Pinnacle{
public:struct node *start;
Pinnacle(){
start=NULL;
}
void insert();
void del();
void display();
int total();
void reverse(struct node*);
void concat(Pinnacle);
};
void Pinnacle:: insert(){
cout&lt;&lt;&quot;Press:\n1.to insert in beginning\n2.to insert in
end\n3.to insert in middle\n&quot;;
int ch;
cin&gt;&gt;ch;
struct node *temp;

temp=new node[sizeof(node)];
struct node *ptr=start;
switch(ch){
case 1:cout&lt;&lt;&quot;Enter name of president:\n&quot;;
cin&gt;&gt;temp-&gt;name;
cout&lt;&lt;&quot;Enter PRN of President:\n&quot;;
cin&gt;&gt;temp-&gt;prn;
if(start==NULL)
start=temp;
else{
temp-&gt;next=start;
start=temp;
}
break;
case 2:cout&lt;&lt;&quot;Enter name of secretarty:\n&quot;;
cin&gt;&gt;temp-&gt;name;
cout&lt;&lt;&quot;Enter PRN of secretary:\n&quot;;
cin&gt;&gt;temp-&gt;prn;
while(ptr-&gt;next!=NULL)
ptr=ptr-&gt;next;
ptr-&gt;next=temp;
temp-&gt;next=NULL;
break;
case 3:cout&lt;&lt;&quot;Enter name of Member:\n&quot;;
cin&gt;&gt;temp-&gt;name;

cout&lt;&lt;&quot;Enter PRN of Member:\n&quot;;
cin&gt;&gt;temp-&gt;prn;
temp-&gt;next=start-&gt;next;
start-&gt;next=temp;
break;
default:cout&lt;&lt;&quot;Wrong input\n&quot;;
}}
void Pinnacle:: del(){
struct node *ptr=start;
struct node *temp;
if(start==NULL)
cout&lt;&lt;&quot;Empty list&quot;;
else{
cout&lt;&lt;&quot;Enter the PRN no. of the member whose entry is
to be deleted:\n&quot;;
int k;
cin&gt;&gt;k;
while(ptr!=NULL){
if(ptr-&gt;prn==k){
if(ptr==start)
start=ptr;
else if(ptr-&gt;next==NULL)
temp-&gt;next=NULL;
else
temp-&gt;next=ptr-&gt;next;
cout&lt;&lt;&quot;Entry succesfully deleted.\n&quot;;

temp=ptr;
ptr=ptr-&gt;next;
}}}}
int Pinnacle:: total(){
int k=0;
struct node* ptr=start;
while(ptr!=NULL){
k++;
ptr=ptr-&gt;next;
}
return k;
}
void Pinnacle:: reverse(struct node *ptr){
if(ptr-&gt;next==NULL){
cout&lt;&lt;&quot;Name:&quot;&lt;&lt;ptr-&gt;name&lt;&lt;&quot;\nPNR: &quot;&lt;&lt;ptr-
&gt;prn&lt;&lt;&quot;\n&quot;;
return;
}
reverse(ptr-&gt;next);
cout&lt;&lt;&quot;Name:&quot;&lt;&lt;ptr-&gt;name&lt;&lt;&quot;\nPNR: &quot;&lt;&lt;ptr-
&gt;prn&lt;&lt;&quot;\n&quot;;
return;
}
void Pinnacle:: concat(Pinnacle q){

struct node* ptr=start;
while(ptr-&gt;next!=NULL){
ptr=ptr-&gt;next;
}
ptr-&gt;next=q.start;
}
void Pinnacle:: display(){
struct node *ptr=start;
cout&lt;&lt;&quot;The Details of Students are:\n&quot;;
int k=1;
while(ptr!=NULL){
cout&lt;&lt;k&lt;&lt;&quot;.Name:&quot;&lt;&lt;ptr-&gt;name&lt;&lt;&quot;\n PNR: &quot;&lt;&lt;ptr-
&gt;prn&lt;&lt;&quot;\n&quot;;
k++;
ptr=ptr-&gt;next;
}}
int main(){
Pinnacle p,q;
char in=&#39;y&#39;;
while(in==&#39;y&#39;||in==&#39;Y&#39;){
cout&lt;&lt;&quot;Press\n1)Add and delete the members as well as
president or even secretary.\n2)Compute total number of
members of club\n&quot;;
cout&lt;&lt;&quot;3)Display members\n4)Display list in reverse
order using recursion\n5)Two linked lists exists for two
divisions. Concatenate two lists\n&quot;;
int ch;

cin&gt;&gt;ch;
switch(ch){
case 1:cout&lt;&lt;&quot;Press\n1.to insert\n2.to delete\n&quot;;
int k,m;
cin&gt;&gt;k;
switch(k){
case 1:cout&lt;&lt;&quot;Enter no. of data to be entered:\n&quot;;
cin&gt;&gt;m;
for(int i=1;i&lt;=m;i++)
p.insert();
break;
case 2:p.del();
break;
default:cout&lt;&lt;&quot;Wrong input.&quot;;
}
break;
case 2:cout&lt;&lt;&quot;Total number of entries are:
&quot;&lt;&lt;p.total()&lt;&lt;&quot;\n&quot;;
break;
case 3:p.display();
break;
case 4:p.reverse(p.start);
break;
case 5:cout&lt;&lt;&quot;Enter no. of entries in second list:\n&quot;;
int f;
cin&gt;&gt;f;
for(int i=1;i&lt;=f;i++)
q.insert();

p.concat(q);
cout&lt;&lt;&quot;List sucessfully concatenated&quot;;
break;
default:cout&lt;&lt;&quot;wrong input&quot;;
}
cout&lt;&lt;&quot;\ndo you want to continue?(y/n)&quot;;
cin&gt;&gt;in;
}
return 0;
}
