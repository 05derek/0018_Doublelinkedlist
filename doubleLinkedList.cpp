

    //step 1:Traverse the list to find the node
    while (current != NULL && current->noMhs != rollNo)
        current = current->next;

    if(current == NULL)
    {
        cout << "Record not found" << endl;
        return;
    }

}
}