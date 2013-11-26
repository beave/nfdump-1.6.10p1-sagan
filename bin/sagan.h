
#ifdef SAGAN

int	sagan;				// Sagan flag
char	*sagan_fifo;			// Sagan FIFO name
int	sagan_fd;			// Sagan File Descriptor

char	sagan_ipstr[40];                // Source address of sending netflow device

void flow_record_to_sagan(void *record, char ** s, int tag);

#endif

