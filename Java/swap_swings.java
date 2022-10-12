import java.awt.*;
import java.awt.event.*;
public class swap_swings {

    public static void main(String[] args) {
        // TODO Auto-generated method stub
        Frame f=new Frame();
        f.setSize(500,500);

        Label l1=new Label();
        Label l2=new Label();
        TextField t1=new TextField(20);
        TextField t2=new TextField(20);
        Button b1=new Button("Swap");
        l1.setText("Enter First Number");
        l2.setText("Enter Second Number");
        f.setLayout(new FlowLayout());
        f.add(l1);
        f.add(t1);
        f.add(l2);
        f.add(t2);
        f.add(b1);

        f.setVisible(true);

        b1.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent ae)
            {
                String temp=t1.getText();
                t1.setText(t2.getText());
                t2.setText(temp);
            }
        });

    }

}

