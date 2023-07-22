/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfolder_getList_v1_Response_mPayload_allOf.h
 *
 * 
 */

#ifndef OAIEzsignfolder_getList_v1_Response_mPayload_allOf_H
#define OAIEzsignfolder_getList_v1_Response_mPayload_allOf_H

#include <QJsonObject>

#include "OAIEzsignfolder_ListElement.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignfolder_ListElement;

class OAIEzsignfolder_getList_v1_Response_mPayload_allOf : public OAIObject {
public:
    OAIEzsignfolder_getList_v1_Response_mPayload_allOf();
    OAIEzsignfolder_getList_v1_Response_mPayload_allOf(QString json);
    ~OAIEzsignfolder_getList_v1_Response_mPayload_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsignfolder_ListElement> getAObjEzsignfolder() const;
    void setAObjEzsignfolder(const QList<OAIEzsignfolder_ListElement> &a_obj_ezsignfolder);
    bool is_a_obj_ezsignfolder_Set() const;
    bool is_a_obj_ezsignfolder_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsignfolder_ListElement> a_obj_ezsignfolder;
    bool m_a_obj_ezsignfolder_isSet;
    bool m_a_obj_ezsignfolder_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfolder_getList_v1_Response_mPayload_allOf)

#endif // OAIEzsignfolder_getList_v1_Response_mPayload_allOf_H
