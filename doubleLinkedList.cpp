

            //insert in between node
            //step 8: locate polition for insertion
            Node *current = START;
            while (current->next !=NULL && current->next->noMhs < nim)
            {
                current = current->next;
            }

            if (current->next !=NULL && nim == current->next->noMhs)
            {
                cout << "\nDuplicate roll number not allowed" << endl;
                return;
            }

        }
}