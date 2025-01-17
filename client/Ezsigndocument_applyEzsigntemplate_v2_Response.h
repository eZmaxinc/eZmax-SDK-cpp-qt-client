/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsigndocument_applyEzsigntemplate_v2_Response.h
 *
 * Response for POST /2/object/ezsigndocument/{pkiEzsigndocument}/applyEzsigntemplate
 */

#ifndef Ezsigndocument_applyEzsigntemplate_v2_Response_H
#define Ezsigndocument_applyEzsigntemplate_v2_Response_H

#include <QJsonObject>

#include "Common_Response.h"
#include "Common_Response_Warning.h"
#include "Common_Response_objDebug.h"
#include "Common_Response_objDebugPayload.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Common_Response_objDebugPayload;
class Common_Response_objDebug;
class Common_Response_Warning;

class Ezsigndocument_applyEzsigntemplate_v2_Response : public Object {
public:
    Ezsigndocument_applyEzsigntemplate_v2_Response();
    Ezsigndocument_applyEzsigntemplate_v2_Response(QString json);
    ~Ezsigndocument_applyEzsigntemplate_v2_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Common_Response_objDebugPayload getObjDebugPayload() const;
    void setObjDebugPayload(const Common_Response_objDebugPayload &obj_debug_payload);
    bool is_obj_debug_payload_Set() const;
    bool is_obj_debug_payload_Valid() const;

    Common_Response_objDebug getObjDebug() const;
    void setObjDebug(const Common_Response_objDebug &obj_debug);
    bool is_obj_debug_Set() const;
    bool is_obj_debug_Valid() const;

    QList<Common_Response_Warning> getAObjWarning() const;
    void setAObjWarning(const QList<Common_Response_Warning> &a_obj_warning);
    bool is_a_obj_warning_Set() const;
    bool is_a_obj_warning_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Common_Response_objDebugPayload m_obj_debug_payload;
    bool m_obj_debug_payload_isSet;
    bool m_obj_debug_payload_isValid;

    Common_Response_objDebug m_obj_debug;
    bool m_obj_debug_isSet;
    bool m_obj_debug_isValid;

    QList<Common_Response_Warning> m_a_obj_warning;
    bool m_a_obj_warning_isSet;
    bool m_a_obj_warning_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigndocument_applyEzsigntemplate_v2_Response)

#endif // Ezsigndocument_applyEzsigntemplate_v2_Response_H
