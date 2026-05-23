package com.ika.ui.util;

import java.util.*;

public class JsonParser {
    public static String toJson(Object o) {
        if (o == null) return "null";
        if (o instanceof String) return '"' + escape((String)o) + '"';
        if (o instanceof Number || o instanceof Boolean) return o.toString();
        if (o instanceof Map) {
            StringBuilder sb = new StringBuilder();
            sb.append('{');
            boolean first = true;
            for (Object k : ((Map<?,?>)o).keySet()) {
                if (!first) sb.append(',');
                first = false;
                sb.append(toJson(k.toString()));
                sb.append(':');
                sb.append(toJson(((Map<?,?>)o).get(k)));
            }
            sb.append('}');
            return sb.toString();
        }
        if (o instanceof Collection) {
            StringBuilder sb = new StringBuilder();
            sb.append('[');
            boolean first = true;
            for (Object e : (Collection<?>)o) {
                if (!first) sb.append(','); first=false;
                sb.append(toJson(e));
            }
            sb.append(']');
            return sb.toString();
        }
        return '"' + escape(o.toString()) + '"';
    }

    private static String escape(String s) {
        return s.replace("\\","\\\\").replace("\"","\\\"").replace("\n","\\n");
    }
}
