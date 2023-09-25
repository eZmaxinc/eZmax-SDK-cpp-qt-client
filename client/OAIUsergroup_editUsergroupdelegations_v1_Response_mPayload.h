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
 * OAIUsergroup_editUsergroupdelegations_v1_Response_mPayload.h
 *
 * Response for PUT /1/object/usergroup/{pkiUsergroupID}/EditUsergroupdelegations
 */

#ifndef OAIUsergroup_editUsergroupdelegations_v1_Response_mPayload_H
#define OAIUsergroup_editUsergroupdelegations_v1_Response_mPayload_H

#include <QJsonObject>

#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {

class OAIUsergroup_editUsergroupdelegations_v1_Response_mPayload : public OAIObject {
public:
    OAIUsergroup_editUsergroupdelegations_v1_Response_mPayload();
    OAIUsergroup_editUsergroupdelegations_v1_Response_mPayload(QString json);
    ~OAIUsergroup_editUsergroupdelegations_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<qint32> getAPkiUsergroupdelegationId() const;
    void setAPkiUsergroupdelegationId(const QList<qint32> &a_pki_usergroupdelegation_id);
    bool is_a_pki_usergroupdelegation_id_Set() const;
    bool is_a_pki_usergroupdelegation_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<qint32> m_a_pki_usergroupdelegation_id;
    bool m_a_pki_usergroupdelegation_id_isSet;
    bool m_a_pki_usergroupdelegation_id_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIUsergroup_editUsergroupdelegations_v1_Response_mPayload)

#endif // OAIUsergroup_editUsergroupdelegations_v1_Response_mPayload_H
