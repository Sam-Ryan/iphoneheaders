/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, PRSImage, NSArray;


@protocol PRSMovieInfoSection <PRSSection>
@property (nonatomic,retain) NSString * rt_text; 
@property (nonatomic,retain) PRSImage * rt_glyph; 
@property (nonatomic,retain) PRSImage * image; 
@property (nonatomic,retain) NSArray * buy_button_sections; 
@property (nonatomic,retain) NSArray * sections; 
@property (nonatomic,retain) id<PRSActionButton> action_button; 
@required
-(void)setImage:(id)arg1;
-(PRSImage *)image;
-(void)setSections:(id)arg1;
-(NSArray *)sections;
-(void)setAction_button:(id)arg1;
-(void)setRt_glyph:(id)arg1;
-(void)setRt_text:(id)arg1;
-(void)setBuy_button_sections:(id)arg1;
-(id<PRSActionButton>)action_button;
-(PRSImage *)rt_glyph;
-(NSString *)rt_text;
-(NSArray *)buy_button_sections;

@end

