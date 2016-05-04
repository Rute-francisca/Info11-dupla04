#include <stdio.h>

int main (void)
{
    int jogo,teste 1,teste 2,teste 3,cent,dez,unid,jogada,erolar,x,y;
    printf("Digite a jogada");
    scanf("%d",&jogo);
    //partir o numero
    cent=jogo/100;
    dez=(jogo % 100)/10;
    unid=(jogo %100)/10;
    if(((cent==1)&&(dez==0)&&(unid==0))||&&(dez==1)&&(unid==0)||((cent==0)&&    (dez==0)&&(unid==1)))
    {
        pritf("000\n");
    }
    else
    {
        jogada=cent^dez^unid;
        if(jogada==0)//se eu receber uma im perfeita intencao enrolar a part    ida
        {

            {
                if (cent+dez+unid==3)
                {
                    if((cent==0)&&(dez==1)&&(unid==2)||(cent==2)&&(dez==1)&&(unid==0))//a excessao que te falei
                        printf("010\n");
                    if ((cent==1&&dez==2&&unid==0)||(cent==1)&&(dez==0)&&(unid==2))
                        printf ("100\n");
                    if ((cent==1&&dez==2&&unid==0)||(cent==1)&&(dez==0)&&(unid==2))
                        printf("001\n");
                    if(cent==1&&dez==1&&unid==1)
                        printf("101\n");
                    //if((cent!=2&&dez!=2&&unid!=0)||(cent!=2&&dez!=0&&unid!=2)||(cent!=0&&dez!=2&&unid!=2))
                }
                if ((unid>=dez)&&(unid>=cent))
                {
                    enrolar=unid-1;
                    printf("%d%d%d\n",cent,dez,enrolar);
                }
                if ((dez>=cent)&&(dez>unid))
                {
                    enrolar=dez-1;
                    printf("%d%d%d\n",cent,enrolar,unid);
                }
                if ((cent>dez)&&(cent>unid))
                {
                    enrolar=dez-1;
                    printf("%d%d%d\n",cent,enrolar,unid);
                }
            }
            if(jogada!=0)//dar nim perfeita
            {
                if(cent+dez+unid==3)
                {
                    if((cent==0)&&(dez==1)&&(unid==2)||(cent==2)&&(dez==1)&&(unid==0))//a excessao que te falei
                        printf("010\n");
                    if((cent==1&&dez==2&&unid==0)||(cent==1)&&(dez==0)&&(unid==2))
                        printf("100\n");
                    if((cent==0&&dez==2&&unid==1)||(cent==2)&&(dez==0)&&(unid==1))
                        printf("001\n");
                    if(cent==1&&dez==1&&unid==1)
                        printf("101\n");
                }
                else
                {
                    if((cent==0&&dez==0&&unid!=0))
                        printf("001\n");
                    if((cent==0&&dez!=0&&unid==0))
                        printf("010\n");
                    if((cent!=0&&dez==0&&unid==0))
                        printf("100\n");
                    if((cent!=0&&dez!=0&&unid==0)||(cent!=0&&dez==0&&unid!=0)||(cent==0&&dez!=0&&unid!=0)||(cent!=0&&dez!=0&&    unid!=0))
                    {
                        for(x=1;x<=unid;x++)
                        {
                            y=unid-x;
                            teste1=cent^dez^y;
                            if(teste1==0)
                                break;
                        }
                        if (teste1==0)
                            printf("%d%d%d\n",cent,dez,y);
                        [1] ~/informatica/rascunhos/ex11.c   [C][unix][utf-8
                        else
                        {
                            for(x=1;x<=dez;x++)
                            {
                                y=dez-x;
                                teste2=cent^y^unid;
                                if(teste2==0)
                                    break;
                            }
                            if (teste2==0)
                                printf("%d%d%d\n",cent,y,unid);
                            else


                            {
                                for(x=1;x<=cent;x++)
                                {
                                    y=cent-x;
                                    teste3=y^dez^unid;
                                    if(teste3==0)
                                        break;
                                }
                                if (teste3==0)
                                    printf("%d%d%d\n",y,dez,unid);
                            }
                        }
                    }
                }
            }
        }
        return 0;

