//
//  NOCVertexBuffer.h
//  NOCVertexBuffer
//
//  Created by William Lindmeier on 12/26/13.
//  Copyright (c) 2013 William Lindmeier. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GLKit/GLKit.h>

@interface NOCVertexElementBuffer : NSObject

- (id)initWithSize:(GLsizeiptr)size
              data:(const GLvoid *)data;
- (void)bind;
- (void)bind:(void(^)())drawingBlock;
- (void)unbind;

@end
