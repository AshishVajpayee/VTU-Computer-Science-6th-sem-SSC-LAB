#include<stdio.h>
int main()
{
	int count,j,n,time,flag=0,time_quantum,ch=0;
	int wait_time=0,turnaround_time=0,at[10],bt[10],rt[10];
	int endTime,i,smallest;
	int remain=0,sum_wait=0,sum_turnaround=0;
	printf("1.Round Robin \n2.SRTF \n");
	scanf("%d",&ch);
	printf("Enter no of Processes : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter arrival time for Process P%d : ",i+1);
		scanf("%d",&at[i]);
		printf("Enter burst time for Process P%d :",i+1);
		scanf("%d",&bt[i]);
		rt[i]=bt[i];
	}
	switch(ch)
	{
		case 1:
		printf("Enter Time Quantum:\t");
		scanf("%d",&time_quantum);
		remain=n;
		printf("\nProcess time|Turnaround Time|Waiting Time\n");
		for(time=0,count=0;remain!=0;)
		{
			if(rt[count]<=time_quantum && rt[count]>0)
			{
				time+=rt[count];
				rt[count]=0;
				flag=1;
			}
			else if(rt[count]>0)
			{
				rt[count]-=time_quantum;
				time+=time_quantum;
			}
			if(rt[count]==0 && flag==1)
			{
				remain--;
				printf("P[%d]\t|\t%d\t|\t%d\n",count+1,time-at[count],time-at[count]-bt[count]);
				wait_time+=time-at[count]-bt[count];
				turnaround_time+=time-at[count];
				flag=0;
			}
			if(count==n-1)
				count=0;
			else if(at[count+1]<=time)
				count++; 
			else
				count=0;
		}
		printf("\nAverage Waiting Time= %.2f\n",wait_time*1.0/n);
		printf("Avg Turnaround Time = %.2f\n",turnaround_time*1.0/n);
		break;
		case 2:
		remain=0;
		printf("\nProcesst|Turnaround Time| Waiting Timen\n");
		rt[9]=9999;
		for(time=0;remain!=n;time++)
		{
			smallest=9;
			for(i=0;i<n;i++)
				if(at[i]<=time && rt[i]<rt[smallest] && rt[i]>0)
					smallest=i;
			rt[smallest]--;
			if(rt[smallest]==0)
			{
				remain++;
				endTime=time+1;
				printf("\nP[%d]\t|\t%d\t|\t%d",smallest+1,endTime-at[smallest],endTime-bt[smallest]-at[smallest]);
				printf("\n");
				sum_wait+=endTime-bt[smallest]-at[smallest];
				sum_turnaround+=endTime-at[smallest];
			}
		}
		printf("\nAverage waiting time = %f\n",sum_wait*1.0/n);
		printf("Average Turnaround time = %f",sum_turnaround*1.0/n);
		break;
		default:
		printf("Invalid\n");
	}
	return 0;
}