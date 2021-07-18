#include<stdio.h>
#include<stdlib.h>
float afn_euro(float afn)
{
    float converted_euro;
    converted_euro=afn*0.011;
    return converted_euro;

}
float afn_usd(float afn)
{
    float converted_usd;
    converted_usd=afn*0.013;
    return converted_usd;

}
int main()
{   
    int select_currancy,convert_currancy,choice,c;
    float exchange_rate,total_money;
    float euro,usd;
    do
    {
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("+++++++++++++++++++++++++  CUARRANCY CONVERTER  +++++++++++++++++++++++\n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n"); 
    printf("\n \n \n \n \n\n\n\n\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf ("<1> To Afganisthan AFN\n");
    printf ("<2> To European euro EUR\n");
    printf ("<3> To United States dollar USD\n");
    printf ("<4> To Argentine peso ARS\n");
    printf ("<5> To Bahraini dinar BHD\n");
    printf ("<6> To Bangladeshi taka BDT\n");
    printf ("<7> To Brazilian real BRL\n");
    printf ("<8> To Brunei dollar BND\n");
    printf ("<9> To Cambodian riel KHR\n");
    printf ("<10> To Canadian dollar CAD\n");
    printf ("<11> To Chilean peso CLP\n");
    printf ("<12> To Chinese yuan CNY\n");
    printf ("<13> To Colombian peso COP\n");
    printf ("<14> To Croatian kuna HRK\n");
    printf ("<15> To Danish krone DKK\n");
    printf ("<16> To Egyptian pound EGP\n");
    printf ("<17> To Fijian dollar FJD\n");
    printf ("<18> To Hungarian forint HUF\n");
    printf ("<19> To Indian rupeeIndian rupee INR\n");
    printf ("<20> To Australian dollar AUD\n");
    printf ("<21> To Nepalese rupee NPR\n");
    printf ("<22> To New Zealand dollar NZD\n");
    printf ("<23> To Pakistani rupee PKR\n");
    printf ("<24> To Qatari riyal QAR\n");
    printf ("<25> To Saudi riyal SAR\n");
    printf ("<26> To Singapore dollar SGD\n");
    printf ("<27> To British pound GBP\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("                                                       Enter your curancy : "); 
                                                                scanf("%d",&select_currancy);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

    switch (select_currancy)
     {
    case 1: 
        printf("\n\n\n\n                                             Your total amount : ");
        scanf("%f",&total_money);
        system("cls");
        printf ("                      <1> To European euro EUR\n");
        printf ("                      <2> To United States dollar USD\n");
        printf ("                      <3> To Argentine peso ARS\n");
        printf ("                      <4> To Bahraini dinar BHD\n");
        printf ("                      <5> To Bangladeshi taka BDT\n");
        printf ("                      <6> To Brazilian real BRL\n");
        printf ("                      <7> To Brunei dollar BND\n");
        printf ("                      <8> To Cambodian riel KHR\n");
        printf ("                      <10> To Canadian dollar CAD\n");
        printf ("                      <11> To Chilean peso CLP\n");
        printf ("                      <12> To Chinese yuan CNY\n");
        printf ("                      <13> To Colombian peso COP\n");
        printf ("                      <14> To Croatian kuna HRK\n");
        printf ("                      <15> To Danish krone DKK\n");
        printf ("                      <16> To Egyptian pound EGP\n");
        printf ("                      <17> To Fijian dollar FJD\n");
        printf ("                      <18> To Hungarian forint HUF\n");
        printf ("                      <19> To Indian rupeeIndian rupee INR\n");
        printf ("                      <20> To Australian dollar AUD\n");
        printf ("                      <21> To Nepalese rupee NPR\n");
        printf ("                      <22> To New Zealand dollar NZD\n");
        printf ("                      <23> To Pakistani rupee PKR\n");
        printf ("                      <24> To Qatari riyal QAR\n");
        printf ("                      <25> To Saudi riyal SAR\n");
        printf ("                      <26> To Singapore dollar SGD\n");
        printf ("                      <27> To British pound GBP\n");
    
    
        printf("Enter your Convert curancy : "); 
        scanf("%d",&convert_currancy);
        switch (convert_currancy)
        {
        case 1:
            euro=afn_euro(total_money);
            printf("%.2f AFN is converted to %.2f EUR\n",total_money,euro);
            break;
        case 2:
            usd=afn_usd(total_money);
            printf("%.2f AFN is converted to %.2f USD\n",total_money,usd);
            break;
        
        default:
            break;
        }


        break;
    
    default:
        break;
    }
    
    printf("Print 0 to exit : ");
    scanf("%d",&c);
    } while(c!=0);    

}
