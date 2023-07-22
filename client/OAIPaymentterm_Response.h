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
 * OAIPaymentterm_Response.h
 *
 * A Paymentterm Object
 */

#ifndef OAIPaymentterm_Response_H
#define OAIPaymentterm_Response_H

#include <QJsonObject>

#include "OAICommon_Audit.h"
#include "OAIField_ePaymenttermType.h"
#include "OAIMultilingual_PaymenttermDescription.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIMultilingual_PaymenttermDescription;
class OAICommon_Audit;

class OAIPaymentterm_Response : public OAIObject {
public:
    OAIPaymentterm_Response();
    OAIPaymentterm_Response(QString json);
    ~OAIPaymentterm_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiPaymenttermId() const;
    void setPkiPaymenttermId(const qint32 &pki_paymentterm_id);
    bool is_pki_paymentterm_id_Set() const;
    bool is_pki_paymentterm_id_Valid() const;

    QString getSPaymenttermCode() const;
    void setSPaymenttermCode(const QString &s_paymentterm_code);
    bool is_s_paymentterm_code_Set() const;
    bool is_s_paymentterm_code_Valid() const;

    OAIField_ePaymenttermType getEPaymenttermType() const;
    void setEPaymenttermType(const OAIField_ePaymenttermType &e_paymentterm_type);
    bool is_e_paymentterm_type_Set() const;
    bool is_e_paymentterm_type_Valid() const;

    qint32 getIPaymenttermDay() const;
    void setIPaymenttermDay(const qint32 &i_paymentterm_day);
    bool is_i_paymentterm_day_Set() const;
    bool is_i_paymentterm_day_Valid() const;

    OAIMultilingual_PaymenttermDescription getObjPaymenttermDescription() const;
    void setObjPaymenttermDescription(const OAIMultilingual_PaymenttermDescription &obj_paymentterm_description);
    bool is_obj_paymentterm_description_Set() const;
    bool is_obj_paymentterm_description_Valid() const;

    bool isBPaymenttermIsactive() const;
    void setBPaymenttermIsactive(const bool &b_paymentterm_isactive);
    bool is_b_paymentterm_isactive_Set() const;
    bool is_b_paymentterm_isactive_Valid() const;

    OAICommon_Audit getObjAudit() const;
    void setObjAudit(const OAICommon_Audit &obj_audit);
    bool is_obj_audit_Set() const;
    bool is_obj_audit_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_paymentterm_id;
    bool m_pki_paymentterm_id_isSet;
    bool m_pki_paymentterm_id_isValid;

    QString s_paymentterm_code;
    bool m_s_paymentterm_code_isSet;
    bool m_s_paymentterm_code_isValid;

    OAIField_ePaymenttermType e_paymentterm_type;
    bool m_e_paymentterm_type_isSet;
    bool m_e_paymentterm_type_isValid;

    qint32 i_paymentterm_day;
    bool m_i_paymentterm_day_isSet;
    bool m_i_paymentterm_day_isValid;

    OAIMultilingual_PaymenttermDescription obj_paymentterm_description;
    bool m_obj_paymentterm_description_isSet;
    bool m_obj_paymentterm_description_isValid;

    bool b_paymentterm_isactive;
    bool m_b_paymentterm_isactive_isSet;
    bool m_b_paymentterm_isactive_isValid;

    OAICommon_Audit obj_audit;
    bool m_obj_audit_isSet;
    bool m_obj_audit_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPaymentterm_Response)

#endif // OAIPaymentterm_Response_H
