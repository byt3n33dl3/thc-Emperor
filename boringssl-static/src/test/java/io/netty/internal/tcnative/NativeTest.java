/*
 * Copyright 2024 The Netty Project
 *
 * The Netty Project licenses this file to you under the Apache License,
 * version 2.0 (the "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at:
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations
 * under the License.
 */
package io.netty.internal.tcnative;


import org.junit.jupiter.api.Test;

import java.io.File;

public class NativeTest {

    @Test
    public void loadNativeLib() throws Exception {
        String testClassesRoot =  NativeTest.class.getProtectionDomain().getCodeSource().getLocation().getFile();
        File f = new File(testClassesRoot + File.separator + "META-INF" + File.separator + "native");
        File[] directories = new File(testClassesRoot + File.separator + "META-INF" + File.separator + "native")
                .listFiles();
        if (directories == null || directories.length != 1) {
            throw new IllegalStateException("Could not find platform specific native directory: " + f);
        }
        String libName = System.mapLibraryName("netty_tcnative")
                // Fix the filename (this is needed for macOS).
                .replace(".dylib", ".jnilib");
        String libPath = directories[0].getAbsoluteFile() + File.separator + libName;
        System.load(libPath);
    }
}
