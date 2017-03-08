#include "Resources.h"
#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

#include "AClass.h"

using namespace ci;
using namespace ci::app;

class MyCinderApp : public App {
public:
	void	setup() override;

	void	mouseDown(MouseEvent event) override;
	void	keyDown(KeyEvent event) override;
	void	update() override;
	void	draw() override;

	AClass test;
	gl::Texture2dRef mTexture;

};

void MyCinderApp::setup()
{
	test = AClass("Hello World");
	mTexture = gl::Texture::create(loadImage(loadAsset("default_image.png")));
}

void MyCinderApp::update()
{
}

void MyCinderApp::mouseDown(MouseEvent event)
{
}

void MyCinderApp::keyDown(KeyEvent event)
{
}

void MyCinderApp::draw()
{
	gl::clear(Color(0.0f, 0.1f, 0.2f));

	gl::draw(mTexture, getWindowBounds());

	gl::drawString(test.saySomething(), vec2(10, 10));

}


CINDER_APP(MyCinderApp, RendererGl)