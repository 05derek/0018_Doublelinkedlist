

        //step 4:if current is not the las node
        if (current->next != NULL)
            current->next->prev = current->prev;
    }
}
}