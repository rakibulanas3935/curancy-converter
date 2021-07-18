#include<stdio.h>
#include<stdlib.h>
float convert_money(float currancy,float value)
{
    float converted_currancy;
    converted_currancy=currancy*value;
    return converted_currancy;

}
int main()
{   
    int select_currancy,convert_currancy,choice,c;
    float exchange_rate,total_money;
    float afn_any[28];
    do
    {
    printf("\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\t\t\t+++++++++++++++++++++++++  CUARRANCY CONVERTER  +++++++++++++++++++++++\n");
    printf("\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n"); 

    printf("\n\t\tPress any key to continue...");
    getch();
    
    printf("\n\n");

    
    printf ("                              <1>  To Afganisthan AFN\n");
    printf ("                              <2>  To European euro EUR\n");
    printf ("                              <3>  To United States dollar USD\n");
    printf ("                              <4>  To Argentine peso ARS\n");
    printf ("                              <5>  To Bahraini dinar BHD\n");
    printf ("                              <6>  To Bangladeshi taka BDT\n");
    printf ("                              <7>  To Brazilian real BRL\n");
    printf ("                              <8>  To Brunei dollar BND\n");
    printf ("                              <9>  To Cambodian riel KHR\n");
    printf ("                              <10> To Canadian dollar CAD\n");
    printf ("                              <11> To Chilean peso CLP\n");
    printf ("                              <12> To Chinese yuan CNY\n");
    printf ("                              <13> To Colombian peso COP\n");
    printf ("                              <14> To Croatian kuna HRK\n");
    printf ("                              <15> To Danish krone DKK\n");
    printf ("                              <16> To Egyptian pound EGP\n");
    printf ("                              <17> To Fijian dollar FJD\n");
    printf ("                              <18> To Hungarian forint HUF\n");
    printf ("                              <19> To Indian rupeeIndian rupee INR\n");
    printf ("                              <20> To Australian dollar AUD\n");
    printf ("                              <21> To Nepalese rupee NPR\n");
    printf ("                              <22> To New Zealand dollar NZD\n");
    printf ("                              <23> To Pakistani rupee PKR\n");
    printf ("                              <24> To Qatari riyal QAR\n");
    printf ("                              <25> To Saudi riyal SAR\n");
    printf ("                              <26> To Singapore dollar SGD\n");
    printf ("                              <27> To British pound GBP\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("                                               Enter your curancy : "); 
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
        printf ("                      <9> To Canadian dollar CAD\n");
        printf ("                      <10> To Chilean peso CLP\n");
        printf ("                      <11> To Chinese yuan CNY\n");
        printf ("                      <12> To Hong Kong dollar HKD\n");
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
            afn_any[0]=convert_money(total_money,0.011);
            printf("%.2f AFN is converted to %.2f EUR\n",total_money,afn_any[0]);
            break;
        case 2:
            afn_any[1]=convert_money(total_money,0.013);
            printf("%.2f AFN is converted to %.2f USD\n",total_money,afn_any[1]);
            break;
        case 3:
            afn_any[2]=convert_money(total_money,1.21);
            printf("%.2f AFN is converted to %.2f ARS\n",total_money,afn_any[2]);
            break;
        case 4:
            afn_any[3]=convert_money(total_money,0.0048);
            printf("%.2f AFN is converted to %.2f BHD\n",total_money,afn_any[3]);
            break;
        case 5:
            afn_any[4]=convert_money(total_money,0.013);
            printf("%.2f AFN is converted to %.2f USD\n",total_money,afn_any[2]);
            break;
        case 6:
            afn_any[2]=convert_money(total_money,0.013);
            printf("%.2f AFN is converted to %.2f USD\n",total_money,afn_any[2]);
            break;
        case 7:
            afn_any[2]=convert_money(total_money,0.013);
            printf("%.2f AFN is converted to %.2f USD\n",total_money,afn_any[2]);
            break;
        case 8:
            afn_any[2]=convert_money(total_money,0.013);
            printf("%.2f AFN is converted to %.2f USD\n",total_money,afn_any[2]);
            break;
        case 9:
            afn_any[2]=convert_money(total_money,0.013);
            printf("%.2f AFN is converted to %.2f USD\n",total_money,afn_any[2]);
            break;
        case 10:
            afn_any[2]=convert_money(total_money,0.013);
            printf("%.2f AFN is converted to %.2f USD\n",total_money,afn_any[2]);
            break;
        case 11:
            afn_any[2]=convert_money(total_money,0.013);
            printf("%.2f AFN is converted to %.2f USD\n",total_money,afn_any[2]);
            break;
        case 12:
            afn_any[2]=convert_money(total_money,0.013);
            printf("%.2f AFN is converted to %.2f USD\n",total_money,afn_any[2]);
            break;
        case 13:
            afn_any[2]=convert_money(total_money,0.013);
            printf("%.2f AFN is converted to %.2f USD\n",total_money,afn_any[2]);
            break;
        case 14:
            afn_any[2]=convert_money(total_money,0.013);
            printf("%.2f AFN is converted to %.2f USD\n",total_money,afn_any[2]);
            break;
        case 15:
            afn_any[5]=convert_money(total_money,0.013);
            printf("%.2f AFN is converted to %.2f USD\n",total_money,afn_any[5]);
            break;
        case 16:
            afn_any[2]=convert_money(total_money,0.013);
            printf("%.2f AFN is converted to %.2f USD\n",total_money,afn_any[2]);
            break;
        case 17:
            afn_any[2]=convert_money(total_money,0.013);
            printf("%.2f AFN is converted to %.2f USD\n",total_money,afn_any[2]);
            break;
        case 18:
            afn_any[2]=convert_money(total_money,0.013);
            printf("%.2f AFN is converted to %.2f USD\n",total_money,afn_any[2]);
            break;
        case 19:
            afn_any[2]=convert_money(total_money,0.013);
            printf("%.2f AFN is converted to %.2f USD\n",total_money,afn_any[2]);
            break;
        case 20:
            afn_any[2]=convert_money(total_money,0.013);
            printf("%.2f AFN is converted to %.2f USD\n",total_money,afn_any[2]);
            break;
        case 21:
            afn_any[2]=convert_money(total_money,0.013);
            printf("%.2f AFN is converted to %.2f USD\n",total_money,afn_any[2]);
            break;
        case 22:
            afn_any[4]=convert_money(total_money,0.013);
            printf("%.2f AFN is converted to %.2f USD\n",total_money,afn_any[4]);
            break;
        case 23:
            afn_any[2]=convert_money(total_money,0.013);
            printf("%.2f AFN is converted to %.2f USD\n",total_money,afn_any[2]);
            break;
        case 24:
            afn_any[2]=convert_money(total_money,0.013);
            printf("%.2f AFN is converted to %.2f USD\n",total_money,afn_any[2]);
            break;
        case 25:
            afn_any[2]=convert_money(total_money,0.013);
            printf("%.2f AFN is converted to %.2f USD\n",total_money,afn_any[2]);
            break;
        case 26:
            afn_any[2]=convert_money(total_money,0.013);
            printf("%.2f AFN is converted to %.2f USD\n",total_money,afn_any[2]);
            break;
        case 27:
            afn_any[2]=convert_money(total_money,0.013);
            printf("%.2f AFN is converted to %.2f USD\n",total_money,afn_any[2]);
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
