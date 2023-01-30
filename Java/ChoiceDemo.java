import java.awt.*;
import java.awt.event.*;
import java.applet.*;
/* <applet code="ChoiceDemo" width=300 height=180>
</applet> */
public class ChoiceDemo extends Applet implements ItemListener
{
Choice os, browser;
String msg = "";
public void init()
{
os = new Choice();
browser = new Choice();
os.add("Windows 98/XP");
os.add("Windows NT/2000");
os.add("Solaris");
os.add("MacOS");
browser.add("Netscape 3.x");
browser.add("Internet Explorer 4.0");
browser.add("Internet Explorer 5.0");
browser.add("Internet Explorer 6.0");
add(os);
add(browser);
os.addItemListener(this);
browser.addItemListener(this);
}
public void itemStateChanged(ItemEvent ie)
{
repaint();
}
public void paint(Graphics g)
{
msg = "Current OS: ";
msg += os.getSelectedItem();
g.drawString(msg, 6, 120);
msg = "Current Browser: ";
msg += browser.getSelectedItem();
g.drawString(msg, 6, 140);
}
}
