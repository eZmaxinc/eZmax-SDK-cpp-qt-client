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
 * Custom_Notificationtestgetnotificationtests_Response.h
 *
 * A Notificationtest Object in the context of getNotificationtests
 */

#ifndef Custom_Notificationtestgetnotificationtests_Response_H
#define Custom_Notificationtestgetnotificationtests_Response_H

#include <QJsonObject>

#include "Field_eNotificationpreferenceStatus.h"
#include "Multilingual_NotificationtestName.h"
#include "Notificationtest_Response.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Multilingual_NotificationtestName;

class Custom_Notificationtestgetnotificationtests_Response : public Object {
public:
    Custom_Notificationtestgetnotificationtests_Response();
    Custom_Notificationtestgetnotificationtests_Response(QString json);
    ~Custom_Notificationtestgetnotificationtests_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiNotificationtestId() const;
    void setPkiNotificationtestId(const qint32 &pki_notificationtest_id);
    bool is_pki_notificationtest_id_Set() const;
    bool is_pki_notificationtest_id_Valid() const;

    Multilingual_NotificationtestName getObjNotificationtestName() const;
    void setObjNotificationtestName(const Multilingual_NotificationtestName &obj_notificationtest_name);
    bool is_obj_notificationtest_name_Set() const;
    bool is_obj_notificationtest_name_Valid() const;

    qint32 getFkiNotificationsubsectionId() const;
    void setFkiNotificationsubsectionId(const qint32 &fki_notificationsubsection_id);
    bool is_fki_notificationsubsection_id_Set() const;
    bool is_fki_notificationsubsection_id_Valid() const;

    QString getSNotificationtestFunction() const;
    void setSNotificationtestFunction(const QString &s_notificationtest_function);
    bool is_s_notificationtest_function_Set() const;
    bool is_s_notificationtest_function_Valid() const;

    QString getSNotificationtestNameX() const;
    void setSNotificationtestNameX(const QString &s_notificationtest_name_x);
    bool is_s_notificationtest_name_x_Set() const;
    bool is_s_notificationtest_name_x_Valid() const;

    Field_eNotificationpreferenceStatus getENotificationpreferenceStatus() const;
    void setENotificationpreferenceStatus(const Field_eNotificationpreferenceStatus &e_notificationpreference_status);
    bool is_e_notificationpreference_status_Set() const;
    bool is_e_notificationpreference_status_Valid() const;

    qint32 getINotificationtest() const;
    void setINotificationtest(const qint32 &i_notificationtest);
    bool is_i_notificationtest_Set() const;
    bool is_i_notificationtest_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_notificationtest_id;
    bool m_pki_notificationtest_id_isSet;
    bool m_pki_notificationtest_id_isValid;

    Multilingual_NotificationtestName m_obj_notificationtest_name;
    bool m_obj_notificationtest_name_isSet;
    bool m_obj_notificationtest_name_isValid;

    qint32 m_fki_notificationsubsection_id;
    bool m_fki_notificationsubsection_id_isSet;
    bool m_fki_notificationsubsection_id_isValid;

    QString m_s_notificationtest_function;
    bool m_s_notificationtest_function_isSet;
    bool m_s_notificationtest_function_isValid;

    QString m_s_notificationtest_name_x;
    bool m_s_notificationtest_name_x_isSet;
    bool m_s_notificationtest_name_x_isValid;

    Field_eNotificationpreferenceStatus m_e_notificationpreference_status;
    bool m_e_notificationpreference_status_isSet;
    bool m_e_notificationpreference_status_isValid;

    qint32 m_i_notificationtest;
    bool m_i_notificationtest_isSet;
    bool m_i_notificationtest_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Custom_Notificationtestgetnotificationtests_Response)

#endif // Custom_Notificationtestgetnotificationtests_Response_H
