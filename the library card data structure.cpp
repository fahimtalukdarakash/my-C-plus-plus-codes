#include<cstdio>
struct catalogcard{
           const char *title;
           const char *author;
           const char *publisher;
           const char *subject;
           const char *isbn;
           const char *oclc;
           short int ddc1;
           short int ddc2;
           short int year_pub;
           short int year_acq;
           short int quantity;
};
int main()
{
           catalogcard cc={"abcd","abcd","abcd","abcd","123456789876","9853427842982948",28,28,28,29,30};
           printf("%s\n",cc.title);
           printf("%s\n",cc.author);
           printf("%s\n",cc.publisher);
           printf("%s\n",cc.subject);
           printf("%s\n",cc.isbn);
           printf("%s\n",cc.oclc);
           printf("%d\n",cc.ddc1);
           printf("%d\n",cc.ddc2);
           printf("%d\n",cc.year_pub);
           printf("%d\n",cc.year_acq);
           printf("%d\n",cc.quantity);
           return 0;
}
