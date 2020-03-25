
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_peer_swing_SwingComponentPeer__
#define __gnu_java_awt_peer_swing_SwingComponentPeer__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace peer
        {
          namespace swing
          {
              class SwingComponent;
              class SwingComponentPeer;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class AWTEvent;
        class BufferCapabilities;
        class BufferCapabilities$FlipContents;
        class Color;
        class Component;
        class Cursor;
        class Dimension;
        class Font;
        class FontMetrics;
        class Graphics;
        class GraphicsConfiguration;
        class Image;
        class Point;
        class Rectangle;
        class Toolkit;
      namespace event
      {
          class FocusEvent;
          class KeyEvent;
          class MouseEvent;
          class PaintEvent;
      }
      namespace image
      {
          class ColorModel;
          class ImageObserver;
          class ImageProducer;
          class VolatileImage;
      }
      namespace peer
      {
          class ContainerPeer;
      }
    }
  }
  namespace sun
  {
    namespace awt
    {
        class CausedFocusEvent$Cause;
    }
  }
}

class gnu::java::awt::peer::swing::SwingComponentPeer : public ::java::lang::Object
{

public: // actually protected
  SwingComponentPeer();
  virtual void init(::java::awt::Component *, ::gnu::java::awt::peer::swing::SwingComponent *);
public:
  virtual jint checkImage(::java::awt::Image *, jint, jint, ::java::awt::image::ImageObserver *);
  virtual ::java::awt::Image * createImage(::java::awt::image::ImageProducer *);
  virtual ::java::awt::Image * createImage(jint, jint);
  virtual void disable();
  virtual void dispose();
  virtual void enable();
  virtual ::java::awt::image::ColorModel * getColorModel();
  virtual ::java::awt::FontMetrics * getFontMetrics(::java::awt::Font *);
  virtual ::java::awt::Graphics * getGraphics();
  virtual ::java::awt::Point * getLocationOnScreen();
  virtual ::java::awt::Dimension * getMinimumSize();
  virtual ::java::awt::Dimension * getPreferredSize();
  virtual ::java::awt::Toolkit * getToolkit();
  virtual void handleEvent(::java::awt::AWTEvent *);
  virtual void hide();
  virtual jboolean isFocusTraversable();
  virtual jboolean isFocusable();
  virtual ::java::awt::Dimension * minimumSize();
  virtual ::java::awt::Dimension * preferredSize();
  virtual void paint(::java::awt::Graphics *);
  virtual jboolean prepareImage(::java::awt::Image *, jint, jint, ::java::awt::image::ImageObserver *);
  virtual void print(::java::awt::Graphics *);
  virtual void repaint(jlong, jint, jint, jint, jint);
  virtual void requestFocus();
  virtual jboolean requestFocus(::java::awt::Component *, jboolean, jboolean, jlong);
  virtual void reshape(jint, jint, jint, jint);
  virtual void setBackground(::java::awt::Color *);
  virtual void setBounds(jint, jint, jint, jint);
  virtual void setCursor(::java::awt::Cursor *);
  virtual void setEnabled(jboolean);
  virtual void setFont(::java::awt::Font *);
  virtual void setForeground(::java::awt::Color *);
  virtual void setVisible(jboolean);
  virtual void show();
  virtual ::java::awt::GraphicsConfiguration * getGraphicsConfiguration();
  virtual void setEventMask(jlong);
  virtual jboolean isObscured();
  virtual jboolean canDetermineObscurity();
  virtual void coalescePaintEvent(::java::awt::event::PaintEvent *);
  virtual void updateCursorImmediately();
  virtual jboolean handlesWheelScrolling();
  virtual ::java::awt::image::VolatileImage * createVolatileImage(jint, jint);
  virtual void createBuffers(jint, ::java::awt::BufferCapabilities *);
  virtual ::java::awt::Image * getBackBuffer();
  virtual void flip(::java::awt::BufferCapabilities$FlipContents *);
  virtual void destroyBuffers();
  virtual ::java::awt::Rectangle * getBounds();
  virtual void reparent(::java::awt::peer::ContainerPeer *);
  virtual void setBounds(jint, jint, jint, jint, jint);
  virtual jboolean isReparentSupported();
  virtual void layout();
public: // actually protected
  virtual void peerPaint(::java::awt::Graphics *, jboolean);
  virtual void peerPaintComponent(::java::awt::Graphics *);
  virtual void handleMouseEvent(::java::awt::event::MouseEvent *);
  virtual void handleMouseMotionEvent(::java::awt::event::MouseEvent *);
  virtual void handleKeyEvent(::java::awt::event::KeyEvent *);
  virtual void handleFocusEvent(::java::awt::event::FocusEvent *);
public:
  virtual ::java::awt::Component * getComponent();
  virtual jboolean requestFocus(::java::awt::Component *, jboolean, jboolean, jlong, ::sun::awt::CausedFocusEvent$Cause *);
public: // actually protected
  ::java::awt::Component * __attribute__((aligned(__alignof__( ::java::lang::Object)))) awtComponent;
  ::gnu::java::awt::peer::swing::SwingComponent * swingComponent;
  ::java::awt::Font * peerFont;
  ::java::awt::Rectangle * paintArea;
public: // actually package-private
  static jboolean $assertionsDisabled;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_peer_swing_SwingComponentPeer__
