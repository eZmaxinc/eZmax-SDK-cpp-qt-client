/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.13
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAINotificationtest_getElements_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/notificationtest/{pkiNotificationtestID}/getElements
 */

#ifndef OAINotificationtest_getElements_v1_Response_mPayload_H
#define OAINotificationtest_getElements_v1_Response_mPayload_H

#include <QJsonObject>

#include <QJsonValue>
#include <QList>
#include <QMap>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAINotificationtest_getElements_v1_Response_mPayload : public OAIObject {
public:
    OAINotificationtest_getElements_v1_Response_mPayload();
    OAINotificationtest_getElements_v1_Response_mPayload(QString json);
    ~OAINotificationtest_getElements_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiNotificationtestId() const;
    void setPkiNotificationtestId(const qint32 &pki_notificationtest_id);
    bool is_pki_notificationtest_id_Set() const;
    bool is_pki_notificationtest_id_Valid() const;

    QString getSNotificationtestFunction() const;
    void setSNotificationtestFunction(const QString &s_notificationtest_function);
    bool is_s_notificationtest_function_Set() const;
    bool is_s_notificationtest_function_Valid() const;

    QList<QString> getASVariableobjectProperty() const;
    void setASVariableobjectProperty(const QList<QString> &a_s_variableobject_property);
    bool is_a_s_variableobject_property_Set() const;
    bool is_a_s_variableobject_property_Valid() const;

    QList<QMap> getAObjVariableobject() const;
    void setAObjVariableobject(const QList<QMap> &a_obj_variableobject);
    bool is_a_obj_variableobject_Set() const;
    bool is_a_obj_variableobject_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_notificationtest_id;
    bool m_pki_notificationtest_id_isSet;
    bool m_pki_notificationtest_id_isValid;

    QString s_notificationtest_function;
    bool m_s_notificationtest_function_isSet;
    bool m_s_notificationtest_function_isValid;

    QList<QString> a_s_variableobject_property;
    bool m_a_s_variableobject_property_isSet;
    bool m_a_s_variableobject_property_isValid;

    QList<QMap> a_obj_variableobject;
    bool m_a_obj_variableobject_isSet;
    bool m_a_obj_variableobject_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAINotificationtest_getElements_v1_Response_mPayload)

#endif // OAINotificationtest_getElements_v1_Response_mPayload_H
