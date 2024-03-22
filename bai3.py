from ._anvil_designer import Form1Template
from anvil import *

class Form1(Form1Template):
    def __init__(self, **properties):
        # Set Form properties and Data Bindings.
        self.init_components(**properties)

        # Any code you write here will run before the form opens.

    def insertion_sort(self, arr):
      
        n = len(arr)
        for i in range(1, n):
            key = arr[i]
            j = i - 1
            while j >= 0 and key < arr[j]:
                arr[j + 1] = arr[j]
                j -= 1
            arr[j + 1] = key

    def button_1_click(self, **event_args):
        input_numbers = self.text_box_1.text.strip().split()
       
        
        input_numbers = [int(num) for num in input_numbers]
       
        self.insertion_sort(input_numbers)
       
        # Display the sorted numbers in text box 2
        self.text_box_2.text = ' '.join(map(str, input_numbers))

    def text_box_2_pressed_enter(self, **event_args):
       
        pass

    def text_box_1_pressed_enter(self, **event_args):
        
        pass
