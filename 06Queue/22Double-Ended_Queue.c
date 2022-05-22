// Double-ended queues, hence, have the following characteristics:

// They don't follow the FIFO discipline.
// Insertion can be done at both the ends of the queue.
// Deletion can also be done from both ends of the queue.



// DEQueues are of two types:

// Restricted Input DEQueue----->Input restricted DEQueues don’t allow insertion on the front end. But you can delete from both ends.
// Restricted Output DEQueue----->Output restricted DEQueues don’t allow deletion from the rear end. But you can perform the insertion on both the ends



// Methods

// enqueueF()------>insert from front
// enqueueR()------>insert from last 
// dequeueF()------>delete from front
// dequeueR()------>delete from last 