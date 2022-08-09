i=j=0;
    k = start;
    while (i < n && j < m)
    {
        if(left[i] < right[j]){
            arr[k] = left[i];
            i++;

        }else{
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i<n)
    {
     arr[k] = left[k];
     i++;
     k++;
    }
    while(j<m){
        arr[k] = right[j];
        j++;
        k++;
    }

    