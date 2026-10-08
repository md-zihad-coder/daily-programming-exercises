from abc import ABC , abstractmethod
class Banksystem(ABC):
    def access(self):
        print("access grunded")
    @abstractmethod
    def security(self):
        pass


class webapp(Banksystem):
    def security(self):
        print("Best security for web site")
obj = webapp()
obj.security()
obj.access()
