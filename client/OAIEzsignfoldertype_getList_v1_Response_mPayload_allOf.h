/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf.h
 *
 * 
 */

#ifndef OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf_H
#define OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf_H

#include <QJsonObject>

#include "OAIEzsignfoldertype_ListElement.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf : public OAIObject {
public:
    OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf();
    OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf(QString json);
    ~OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsignfoldertype_ListElement> getAObjEzsignfoldertype() const;
    void setAObjEzsignfoldertype(const QList<OAIEzsignfoldertype_ListElement> &a_obj_ezsignfoldertype);
    bool is_a_obj_ezsignfoldertype_Set() const;
    bool is_a_obj_ezsignfoldertype_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsignfoldertype_ListElement> a_obj_ezsignfoldertype;
    bool m_a_obj_ezsignfoldertype_isSet;
    bool m_a_obj_ezsignfoldertype_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf)

#endif // OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf_H
