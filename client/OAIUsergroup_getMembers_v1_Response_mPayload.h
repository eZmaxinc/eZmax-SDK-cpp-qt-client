/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIUsergroup_getMembers_v1_Response_mPayload.h
 *
 * Response for GET /1/object/usergroup/{pkiUsergroupID}/GetMembers
 */

#ifndef OAIUsergroup_getMembers_v1_Response_mPayload_H
#define OAIUsergroup_getMembers_v1_Response_mPayload_H

#include <QJsonObject>

#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIUsergroup_getMembers_v1_Response_mPayload : public OAIObject {
public:
    OAIUsergroup_getMembers_v1_Response_mPayload();
    OAIUsergroup_getMembers_v1_Response_mPayload(QString json);
    ~OAIUsergroup_getMembers_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<qint32> getAFkiUserId() const;
    void setAFkiUserId(const QList<qint32> &a_fki_user_id);
    bool is_a_fki_user_id_Set() const;
    bool is_a_fki_user_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<qint32> a_fki_user_id;
    bool m_a_fki_user_id_isSet;
    bool m_a_fki_user_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUsergroup_getMembers_v1_Response_mPayload)

#endif // OAIUsergroup_getMembers_v1_Response_mPayload_H
