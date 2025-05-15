

    // step 2: if node is at the beginning
    if (current == START)
    {
        START = current->next; //step 2a
        if (START != NULL)
            START->prev = NULL; // step 2b
    }

}
}