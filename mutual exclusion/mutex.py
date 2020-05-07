import threading
import time

class CricticalSection():
    def __init__(self):
        self.sem = threading.Semaphore()  

    def process_1(self):
        while True:
            print("Entry Section 1")
            self.sem.acquire()      

            self.criticalsection() 
            self.sem.release()      

            print("Critical Section over for process 1") 
            time.sleep(3)          
    def process_2(self):
        while True:
            print("Entry Section-2")
            self.sem.acquire()     

            self.criticalsection() 
            self.sem.release()     

            print("Critical Section over for process 2")   

            time.sleep(3)  

    def criticalsection(self):
        print(" Entered Critical Section!. Perform operation on shared resource")

    def main(self):
        t1 = threading.Thread(target = self.process_1) 
        t1.start()
        t2 = threading.Thread(target = self.process_2) 
        t2.start()

if __name__=="__main__":
    c = CricticalSection()
    c.main()

