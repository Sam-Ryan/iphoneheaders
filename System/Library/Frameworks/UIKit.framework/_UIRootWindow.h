/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:06 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIWindow.h>

@interface _UIRootWindow : UIWindow {

	BOOL _mainDisplay;
	BOOL _isExternal;

}
-(void)dealloc;
-(id)initWithScreen:(id)arg1 ;
-(BOOL)_isWindowServerHostingManaged;
-(BOOL)_isConstrainedByScreenJail;
-(BOOL)_wantsSceneAssociation;
-(void)setScreen:(id)arg1 ;
-(void)_configureRootLayer:(id)arg1 transformLayer:(id)arg2 ;
-(void)_configureContextOptions:(id)arg1 ;
-(BOOL)_touchesInsideShouldHideCalloutBar;
-(BOOL)_transformLayerIncludesScreenRotation;
-(id)_context;
-(id)initWithDisplay:(id)arg1 ;
-(void)_noteScreenDidChangeMode:(id)arg1 ;
@end

