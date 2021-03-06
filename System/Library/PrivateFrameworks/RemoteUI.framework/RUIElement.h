/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:06 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RemoteUI/RemoteUI-Structs.h>
@class NSString, NSDictionary, RUIStyle;

@interface RUIElement : NSObject {

	BOOL _enabled;
	NSString* _identifier;
	NSDictionary* _attributes;
	RUIStyle* _style;
	RUIElement* _parent;

}

@property (nonatomic,copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDictionary * attributes;                   //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) RUIStyle * style;                          //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (assign,nonatomic) BOOL enabled;                              //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,__weak,readonly) RUIElement * parent;              //@synthesize parent=_parent - In the implementation block
-(BOOL)enabled;
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)name;
-(NSString *)identifier;
-(void)setEnabled:(BOOL)arg1 ;
-(RUIStyle *)style;
-(void)setStyle:(RUIStyle *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(id)sourceURL;
-(void)configureView:(id)arg1 ;
-(id)subElementsWithName:(id)arg1 ;
-(void)populatePostbackDictionary:(id)arg1 ;
-(id)initWithAttributes:(id)arg1 parent:(id)arg2 ;
-(id)URLAttributeForImageName:(id)arg1 getScale:(double*)arg2 ;
-(void)imageLoaded:(id)arg1 ;
-(int)_horizontalAlignmentForString:(id)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setImageAlignment:(int)arg1 ;
-(BOOL)loadImage;
-(RUIElement *)parent;
@end

