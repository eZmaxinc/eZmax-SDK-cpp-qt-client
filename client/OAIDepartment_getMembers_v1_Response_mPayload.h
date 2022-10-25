/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIDepartment_getMembers_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/department/{pkiDepartmentID}/getMembers
 */

#ifndef OAIDepartment_getMembers_v1_Response_mPayload_H
#define OAIDepartment_getMembers_v1_Response_mPayload_H

#include <QJsonObject>

#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIDepartment_getMembers_v1_Response_mPayload : public OAIObject {
public:
    OAIDepartment_getMembers_v1_Response_mPayload();
    OAIDepartment_getMembers_v1_Response_mPayload(QString json);
    ~OAIDepartment_getMembers_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<qint32> getAFkiAgentId() const;
    void setAFkiAgentId(const QList<qint32> &a_fki_agent_id);
    bool is_a_fki_agent_id_Set() const;
    bool is_a_fki_agent_id_Valid() const;

    QList<qint32> getAFkiBrokerId() const;
    void setAFkiBrokerId(const QList<qint32> &a_fki_broker_id);
    bool is_a_fki_broker_id_Set() const;
    bool is_a_fki_broker_id_Valid() const;

    QList<qint32> getAFkiCustomerId() const;
    void setAFkiCustomerId(const QList<qint32> &a_fki_customer_id);
    bool is_a_fki_customer_id_Set() const;
    bool is_a_fki_customer_id_Valid() const;

    QList<qint32> getAFkiEmployeeId() const;
    void setAFkiEmployeeId(const QList<qint32> &a_fki_employee_id);
    bool is_a_fki_employee_id_Set() const;
    bool is_a_fki_employee_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<qint32> a_fki_agent_id;
    bool m_a_fki_agent_id_isSet;
    bool m_a_fki_agent_id_isValid;

    QList<qint32> a_fki_broker_id;
    bool m_a_fki_broker_id_isSet;
    bool m_a_fki_broker_id_isValid;

    QList<qint32> a_fki_customer_id;
    bool m_a_fki_customer_id_isSet;
    bool m_a_fki_customer_id_isValid;

    QList<qint32> a_fki_employee_id;
    bool m_a_fki_employee_id_isSet;
    bool m_a_fki_employee_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIDepartment_getMembers_v1_Response_mPayload)

#endif // OAIDepartment_getMembers_v1_Response_mPayload_H