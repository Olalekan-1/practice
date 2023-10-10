from kivy.app import App
from kivy.uix.widget import Widget
from kivy.uix.boxlayout import BoxLayout
from kivy.uix.button import Button
from kivy.uix.gridlayout import GridLayout
from kivy.properties import StringProperty





class WidgetEx(GridLayout):
    #  my_text = StringProperty(text="Hello")
    count = 1
    my_text = StringProperty(text="1")
    count_enable = False
    
    def on_pressed(self):
        print("I am fine because i am clicked")
        if self.count_enable:
            self.my_text = str(self.count)
            self.count += 1

    def on_state_pressed(self, Widget):
        print("state: {}".format(Widget.state))
        if Widget.state == "normal":
            Widget.text = "OFF"
            self.count_enable = False
        else:
            Widget.text = "ON"
            self.count_enable = True

class CanvasEX(Widget):
    pass



        
        




""" class BoxlayoutEX(BoxLayout):
        def __init__(self, **kwargs):
             super().__init__(**kwargs)
             b1 = Button(text="Button 1")
             b2 = Button(text="Button 2", color="red")
             self.add_widget(b1)
             self.add_widget(b2)



class MainWidget(Widget):
    pass

 """
class TheLabApp(App):
    pass

TheLabApp().run()