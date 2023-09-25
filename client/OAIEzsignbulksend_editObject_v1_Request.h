/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignbulksend_editObject_v1_Request.h
 *
 * Request for PUT /1/object/ezsignbulksend/{pkiEzsignbulksendID}
 */

#ifndef OAIEzsignbulksend_editObject_v1_Request_H
#define OAIEzsignbulksend_editObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsignbulksend_RequestCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {
class OAIEzsignbulksend_RequestCompound;

class OAIEzsignbulksend_editObject_v1_Request : public OAIObject {
public:
    OAIEzsignbulksend_editObject_v1_Request();
    OAIEzsignbulksend_editObject_v1_Request(QString json);
    ~OAIEzsignbulksend_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignbulksend_RequestCompound getObjEzsignbulksend() const;
    void setObjEzsignbulksend(const OAIEzsignbulksend_RequestCompound &obj_ezsignbulksend);
    bool is_obj_ezsignbulksend_Set() const;
    bool is_obj_ezsignbulksend_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsignbulksend_RequestCompound m_obj_ezsignbulksend;
    bool m_obj_ezsignbulksend_isSet;
    bool m_obj_ezsignbulksend_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIEzsignbulksend_editObject_v1_Request)

#endif // OAIEzsignbulksend_editObject_v1_Request_H
