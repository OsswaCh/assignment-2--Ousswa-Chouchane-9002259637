# assignment-2--Ousswa-Chouchane-9002259637

the code works well, however, the problem with generating random floats is that when srand(time(NULL)) used
by the function consecutively (aka in the same second) it will keep giving the same result
thus the only way i found mentioned online is using chrono as it is more precise 
HOWEVER, and even though it gives us different numbers they are still very much close to each other
