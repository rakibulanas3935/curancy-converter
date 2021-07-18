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
    float afn_any[28],usd_any[28];
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
            afn_any[4]=convert_money(total_money,1.07);
            printf("%.2f AFN is converted to %.2f BDT\n",total_money,afn_any[4]);
            break;
        case 6:
            afn_any[5]=convert_money(total_money,0.065);
            printf("%.2f AFN is converted to %.2f BRL\n",total_money,afn_any[5]);
            break;
        case 7:
            afn_any[6]=convert_money(total_money,0.017);
            printf("%.2f AFN is converted to %.2f BND\n",total_money,afn_any[6]);
            break;
        case 8:
            afn_any[7]=convert_money(total_money,51.37);
            printf("%.2f AFN is converted to %.2f KHR\n",total_money,afn_any[7]);
            break;
        case 9:
            afn_any[8]=convert_money(total_money,0.016);
            printf("%.2f AFN is converted to %.2f CAD\n",total_money,afn_any[8]);
            break;
        case 10:
            afn_any[9]=convert_money(total_money,9.56);
            printf("%.2f AFN is converted to %.2f CLP\n",total_money,afn_any[9]);
            break;
        case 11:
            afn_any[10]=convert_money(total_money,0.082);
            printf("%.2f AFN is converted to %.2f CNY\n",total_money,afn_any[10]);
            break;
        case 12:
            afn_any[11]=convert_money(total_money,0.098);
            printf("%.2f AFN is converted to %.2f HKD\n",total_money,afn_any[11]);
            break;
        case 13:
            afn_any[12]=convert_money(total_money,48.14);
            printf("%.2f AFN is converted to %.2f COP\n",total_money,afn_any[12]);
            break;
        case 14:
            afn_any[13]=convert_money(total_money,0.080);
            printf("%.2f AFN is converted to %.2f HRK\n",total_money,afn_any[13]);
            break;
        case 15:
            afn_any[14]=convert_money(total_money,0.079);
            printf("%.2f AFN is converted to %.2f DKK\n",total_money,afn_any[14]);
            break;
        case 16:
            afn_any[15]=convert_money(total_money,0.20);
            printf("%.2f AFN is converted to %.2f EGP\n",total_money,afn_any[15]);
            break;
        case 17:
            afn_any[16]=convert_money(total_money,0.026);
            printf("%.2f AFN is converted to %.2f FJD\n",total_money,afn_any[16]);
            break;
        case 18:
            afn_any[17]=convert_money(total_money,3.84);
            printf("%.2f AFN is converted to %.2f HUF\n",total_money,afn_any[17]);
            break;
        case 19:
            afn_any[18]=convert_money(total_money,0.94);
            printf("%.2f AFN is converted to %.2f INR\n",total_money,afn_any[18]);
            break;
        case 20:
            afn_any[19]=convert_money(total_money,0.017);
            printf("%.2f AFN is converted to %.2f AUD\n",total_money,afn_any[19]);
            break;
        case 21:
            afn_any[20]=convert_money(total_money,1.50);
            printf("%.2f AFN is converted to %.2f NPR\n",total_money,afn_any[20]);
            break;
        case 22:
            afn_any[21]=convert_money(total_money,0.018);
            printf("%.2f AFN is converted to %.2f NZD\n",total_money,afn_any[21]);
            break;
        case 23:
            afn_any[22]=convert_money(total_money,2.01);
            printf("%.2f AFN is converted to %.2f PKR\n",total_money,afn_any[22]);
            break;
        case 24:
            afn_any[23]=convert_money(total_money,0.046);
            printf("%.2f AFN is converted to %.2f QAR\n",total_money,afn_any[23]);
            break;
        case 25:
            afn_any[24]=convert_money(total_money,0.047);
            printf("%.2f AFN is converted to %.2f SAR\n",total_money,afn_any[24]);
            break;
        case 26:
            afn_any[25]=convert_money(total_money,0.017);
            printf("%.2f AFN is converted to %.2f SGD\n",total_money,afn_any[25]);
            break;
        case 27:
            afn_any[26]=convert_money(total_money,0.092);
            printf("%.2f AFN is converted to %.2f GBP\n",total_money,afn_any[26]);
            break;
        
        default:
            printf("Invalid input\n");
            break;
        }
        break;
    
    case 2:
        printf("\n\n\n\n                                             Your total amount : ");
        scanf("%f",&total_money);
        system("cls");
        printf ("                      <1> To Afganisthan AFN\n");
        printf ("                      <2> To European euro EUR\n");
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
            usd_any[0]=convert_money(total_money,79.22);
            printf("\t\t\t\t------%.2f USD is converted to %.2f AFN\n------",total_money,usd_any[0]);
            break;
        case 2:
            usd_any[1]=convert_money(total_money,0.85);
            printf("\t\t\t\t------%.2f USD is converted to %.2f EUR------\n",total_money,usd_any[1]);
            break;
        case 3:
            usd_any[2]=convert_money(total_money,96.16);
            printf("\t\t\t\t-------%.2f USD is converted to %.2f ARS------\n",total_money,usd_any[2]);
            break;
        case 4:
            usd_any[3]=convert_money(total_money,0.38);
            printf("%.2f USD is converted to %.2f BHD\n",total_money,usd_any[3]);
            break;
        case 5:
            usd_any[4]=convert_money(total_money,84.78);
            printf("%.2f USD is converted to %.2f BDT\n",total_money,usd_any[4]);
            break;
        case 6:
            usd_any[5]=convert_money(total_money,5.12);
            printf("%.2f USD is converted to %.2f BRL\n",total_money,usd_any[5]);
            break;
        case 7:
            usd_any[6]=convert_money(total_money,1.35);
            printf("%.2f USD is converted to %.2f BND\n",total_money,usd_any[6]);
            break;
        case 8:
            usd_any[7]=convert_money(total_money,4070.93);
            printf("%.2f USD is converted to %.2f KHR\n",total_money,usd_any[7]);
            break;
        case 9:
            usd_any[8]=convert_money(total_money,1.26);
            printf("%.2f USD is converted to %.2f CAD\n",total_money,usd_any[8]);
            break;
        case 10:
            usd_any[9]=convert_money(total_money,757.80);
            printf("%.2f USD is converted to %.2f CLP\n",total_money,usd_any[9]);
            break;
        case 11:
            usd_any[10]=convert_money(total_money,6.48);
            printf("%.2f USD is converted to %.2f CNY\n",total_money,usd_any[10]);
            break;
        case 12:
            usd_any[11]=convert_money(total_money,7.77);
            printf("%.2f USD is converted to %.2f HKD\n",total_money,usd_any[11]);
            break;
        case 13:
            usd_any[12]=convert_money(total_money,3815.03);
            printf("%.2f USD is converted to %.2f COP\n",total_money,usd_any[12]);
            break;
        case 14:
            usd_any[13]=convert_money(total_money,6.35);
            printf("%.2f USD is converted to %.2f HRK\n",total_money,usd_any[13]);
            break;
        case 15:
            usd_any[14]=convert_money(total_money,6.30);
            printf("%.2f USD is converted to %.2f DKK\n",total_money,usd_any[14]);
            break;
        case 16:
            usd_any[15]=convert_money(total_money,15.71);
            printf("%.2f USD is converted to %.2f EGP\n",total_money,usd_any[15]);
            break;
        case 17:
            usd_any[16]=convert_money(total_money,2.08);
            printf("%.2f USD is converted to %.2f FJD\n",total_money,usd_any[16]);
            break;
        case 18:
            usd_any[17]=convert_money(total_money,304.62);
            printf("%.2f USD is converted to %.2f HUF\n",total_money,usd_any[17]);
            break;
        case 19:
            usd_any[18]=convert_money(total_money,74.61);
            printf("%.2f USD is converted to %.2f INR\n",total_money,usd_any[18]);
            break;
        case 20:
            usd_any[19]=convert_money(total_money,1.35);
            printf("%.2f USD is converted to %.2f AUD\n",total_money,usd_any[19]);
            break;
        case 21:
            usd_any[20]=convert_money(total_money,119.24);
            printf("%.2f USD is converted to %.2f NPR\n",total_money,usd_any[20]);
            break;
        case 22:
            usd_any[21]=convert_money(total_money,1.43);
            printf("%.2f USD is converted to %.2f NZD\n",total_money,usd_any[21]);
            break;
        case 23:
            usd_any[22]=convert_money(total_money,159.46);
            printf("%.2f USD is converted to %.2f PKR\n",total_money,usd_any[22]);
            break;
        case 24:
            usd_any[23]=convert_money(total_money,3.64);
            printf("%.2f USD is converted to %.2f QAR\n",total_money,usd_any[23]);
            break;
        case 25:
            usd_any[24]=convert_money(total_money,3.74);
            printf("%.2f USD is converted to %.2f SAR\n",total_money,usd_any[24]);
            break;
        case 26:
            usd_any[25]=convert_money(total_money,1.36);
            printf("%.2f USD is converted to %.2f SGD\n",total_money,usd_any[25]);
            break;
        case 27:
            usd_any[26]=convert_money(total_money,0.73);
            printf("%.2f USD is converted to %.2f GBP\n",total_money,usd_any[26]);
            break;
        
        default:
            break;
        }
    
    default:
        break;
    }
    
    printf("Print 0 to exit : ");
    scanf("%d",&c);
    } while(c!=0);    

}
